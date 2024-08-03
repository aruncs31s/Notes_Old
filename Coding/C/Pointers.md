---
id: Pointers
aliases:
  - c pointer
tags: []
---

# Pointers

- Variable that holds the address of another `Variable`

#example

```c
int *x;
```

here `x` is a pointer to an integer

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
/*
-498828788 // address of k
10  // Value of k
*/
```

#### Pointer to an array

```c
#include <stdio.h>
int main(int argc, char *argv[]) {
  int A[2] = {1, 3};
  int *p = A;
  printf("%d\n", *p);
  printf("%d", *(p + 1));
}
/* output
 1
 3
 */
```

---

#### Accessing Next Variable

```c
#include <stdio.h>
int main(void) {

  const int a = 10, b = 12;

  int *p;
  p = &a;
  printf("%d", *(p + 1));
}
```

#output Using `gcc`

```bash
12
```

#output Using `clang`

```bash
-794418688
```

In this program the i was able to access the variable `b` by using `*(p+1)` because the `gcc` assigned **contiguous memory** location for the two variables.

#### Dynamically allocating memory

```c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  char *string;
  string = (char *)malloc(sizeof(char) * 3);
  string[0] = 'h';
  string[1] = 'i';
  string[2] = '\0'; // Null-terminate the string
  printf("%s\n", string);
  return 0;
}
/* output
hi
*/
```

## References

1. [Source 1](https://embetronicx.com/tutorials/p_language/c/pointers_2/)
2. [Source 2](https://www.cs.cmu.edu/~ab/15-123N09/lectures/Lecture%2005%20-%20Advanced%20pointers.pdf) PDF
3.
