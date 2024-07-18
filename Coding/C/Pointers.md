---
id: Pointers
aliases: []
tags: []
---

# Pointers

- Variable that holds the address of another `Variable`

#example

```c
int *x;
```

it is a pointer to an integer

#example

```c
#include <stdio.h>
int main(int argc, char *argv[])
{
  int *x;
  int k = 10 ;
  x = &k;
  printf("%d\n",x);
  printf("%d\n",*x);
}
```

#output

```
-498828788 // address of k
10  // Value of k
```
