[](../header.md ':include')

# spext

Category: [path](/api_reference?id=path)  
GitHub: [cute_file_system.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_file_system.h)  
---

Returns the extension of the file for the given path. Returns a new string.

```cpp
#define spext(s) cf_path_get_ext(s)
```

Parameters | Description
--- | ---
s | The path string.

## Code Example

> Example fetching a filename from a path without the extension attached.

```cpp
const char ext = spfname("/data/collections/rare/big_gem.txt");
printf("%s\n", ext);
// Prints: .txt
```

## Remarks

Call [sfree](/string/sfree.md) on the return value when done. `sp` stands for "sting path".

## Related Pages

[spfname](/path/spfname.md)  
[spfname_no_ext](/path/spfname_no_ext.md)  
[spnorm](/path/spnorm.md)  
[spext_equ](/path/spext_equ.md)  
[sppop](/path/sppop.md)  
[sppopn](/path/sppopn.md)  
[spcompact](/path/spcompact.md)  
[spdir_of](/path/spdir_of.md)  
[sptop_of](/path/sptop_of.md)  
