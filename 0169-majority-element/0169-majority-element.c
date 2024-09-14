#define SIZE_MAX 5

typedef struct s_node 
{
    int key;
    int value;
    struct s_node *next;
} t_node;

typedef struct s_hash 
{
    t_node *arr[SIZE_MAX];
} t_hash;

t_node *hash_newnode(int key, int value) 
{
    t_node *node = malloc(sizeof(t_node));
    node->key = key;
    node->value = value;
    node->next = NULL;
    return node;
}

int hash(int key) 
{
    int value = abs(key);
    return value % SIZE_MAX;
}

void insert(t_hash *table, int key, int value) 
{
    int index = hash(key);
    t_node *newnode = hash_newnode(key, value);

    if (table->arr[index] == NULL) 
        table->arr[index] = newnode;
    else 
    {
        newnode->next = table->arr[index];
        table->arr[index] = newnode;
    }
}

int search_hash(t_hash *table, int key) 
{
    int index = hash(key);
    t_node *current = table->arr[index];

    while (current != NULL) 
    {
        if (current->key == key) 
           return current->value;
      current = current->next;
    }
    return -1;
}

void inithash(t_hash *table) 
{
  int i;
  
   i = 0;
   
    while(i < SIZE_MAX)
    {
        table->arr[i] = NULL;
        i++;
    }
}

int majorityElement(int *nums, int numsSize) 
{
    t_hash table;
    inithash(&table);
   int i;
   
   i = 0;
   while(i < numsSize)
    {
        int index = search_hash(&table, nums[i]);
        if (index == -1) 
            insert(&table, nums[i], 1);
        else
        {
            int value = search_hash(&table, nums[i]);
            insert(&table, nums[i], value + 1);
        }
        i++;
    }

  i = 0;
  
   while(i < numsSize)
    {
        int value = search_hash(&table, nums[i]);
        if (value > numsSize / 2)
            return nums[i];
        i++;
    }

    return -1;
}
