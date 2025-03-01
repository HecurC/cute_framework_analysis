[](../header.md ':include')

# cf_list_begin

Category: [list](/api_reference?id=list)  
GitHub: [cute_doubly_list.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_doubly_list.h)  
---

Returns a pointer to the first node in the list.

```cpp
CF_ListNode* cf_list_begin(CF_List* list)
```

Parameters | Description
--- | ---
List | The list.

## Code Example

> Looping over a list with a for loop.

```cpp
for (CF_Node n = cf_list_begin(list); n != cf_list_end(list); n = n->next) {
    do_stuff(n);
}
```

## Remarks

Since the list is circular with a single dummy node it can be confusing to loop over. To help make this simpler, use
[cf_list_begin](/list/cf_list_begin.md) and [cf_list_end](/list/cf_list_end.md) to perform a loop over the list.

## Related Pages

[CF_ListNode](/list/cf_listnode.md)  
[CF_List](/list/cf_list.md)  
[CF_LIST_NODE](/list/cf_list_node.md)  
[CF_LIST_HOST](/list/cf_list_host.md)  
[cf_list_init_node](/list/cf_list_init_node.md)  
[cf_list_init](/list/cf_list_init.md)  
[cf_list_push_front](/list/cf_list_push_front.md)  
[cf_list_push_back](/list/cf_list_push_back.md)  
[cf_list_remove](/list/cf_list_remove.md)  
[cf_list_pop_front](/list/cf_list_pop_front.md)  
[cf_list_pop_back](/list/cf_list_pop_back.md)  
[cf_list_empty](/list/cf_list_empty.md)  
[cf_list_back](/list/cf_list_back.md)  
[cf_list_end](/list/cf_list_end.md)  
[cf_list_front](/list/cf_list_front.md)  
