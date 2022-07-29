#ifndef CF069418_4F69_4189_9D29_8071A9B38764
#define CF069418_4F69_4189_9D29_8071A9B38764


#endif /* CF069418_4F69_4189_9D29_8071A9B38764 */
#include<stdbool.h>
/**
 * hashTable.c
 *
 * This is the header file. It contains the interfaces for the hashtable Abstract Data Type (ADT).
 * Specifically, it contains the Incomplete type struct hashtable
 * and the function declarations which operate on a struct Employee Type.
 */

struct Binding; // Incomplete type, has no implementation here. 
struct HashTable; // Incomplete type, has no implementation here

typedef struct Binding Binding;   //Alias name 'struct BInding' to BInding. For convenience.
typedef struct HashTable HashTable; //Alias name 'struct BInding' to BInding. For convenience.
/**
 * This function creates an hashTable.
 */
HashTable *create();//Only the declaration, no implementation here.

unsigned int hash(const char *key);//Only the declaration, no implementation here.

bool add(HashTable* table, const char* key, int value);//Only the declaration, no implementation here.

Binding *find(HashTable* table, const char* key);//Only the declaration, no implementation here.

bool remove(HashTable* table, const char* key);//Only the declaration, no implementation here.

void delete_table(HashTable* table);//Only the declaration, no implementation here.
