### Contents
- [Linear Algebra]()
	- [Properties]
	- [Area]()
		- [Triangle](#area%20of%20triangle)
	- [Differentiation](#differentiation)
		- [Product Rule](#product%20rule)
- [[Vector Algebra]]
- [Roots of Polynomial](#roots%20of%20polynomial)
	- [Quadratic](#quadratic)
- [Matrices](#Matrices)
	- [Multiplication](#matrix%20multiplication)

- [Sets](#sets)
	- [Mandelbrot Set](#mandelbrot%20set)
- [[Newton's Method]]
#### Properties

$$
x + y = y +x
$$
$$
\underset{\Delta S \to \infty }{\ lim}

$$


### Area of Triangle
$$
A = {1 \over 2} l \times b
$$

```python
l = int(input("Enter the lenth"))

```

### Circle

$$
Area , A= \pi r^2
$$
$$
Circumference, C = 2\pi r
$$

### Rectangle
$$
Area , A = length \times widdth 
$$
$$
Circumference ,C = 2\times lenght + 2 \times widht
$$





### Differentiation

#### Del Operator

The differential vector operator is called DEL$(\nabla)$
- *Cartesian Coordinates*
$$
\nabla = \frac{\partial \hat a_ x }{\partial x}+\frac{\partial \hat a_ y }{\partial y}+\frac{\partial \hat a_ z }{\partial z}
$$
- *Cylindrical Coordinates*
$$
\nabla = \frac{\partial \hat a_ \rho }{\partial \rho}+ {1\over \rho} \frac{\partial \hat a_ \phi }{\partial \phi}+\frac{\partial \hat a_ z }{\partial z}
$$
- *Spherical Co-ordinates*

$$
\nabla = \frac{\partial \hat a_ r }{\partial r}+ {1 \over r}\frac{\partial \hat a_\theta }{\partial \theta}+ {1\over r\sin\theta }\frac{\partial \hat a_ \phi }{\partial \phi}
$$
There are 4 possible operations with $\nabla$
- [[Gradient of a Scalar]] $\nabla V$
- [[Divergence]] $\overrightarrow A \ as \  \nabla \textbullet \overrightarrow A$
- [[Curl of a Vector ]] $\overrightarrow A \ as \  \nabla \times \overrightarrow A$
- [[Laplacian of a Scalar V]]

### Differentiation
####  Product Rule
The product rule states that if f(x) and g(x) are two differentiable functions of x, then the derivative of their product, h(x) = f(x) · g(x), with respect to x is given by:

$$
{d\over dx} [f(x) · g(x)] = f'(x) · g(x) + f(x) · g'(x)
$$






### Roots of Polynomial

#### Quadratic
#example 
$$
x^2 + x - 16 = 0
$$
#solution 

$$
x = \frac{-b \underset {-}{+}\sqrt{b^2 - 4ac}}{2a}
$$

#### Cubic
#example 
$$
x^3 + px +q = 0
$$
#solution 

$$


x = \sqrt[3]{\frac{-b + \sqrt{b^2 - 4ac}}{2a}} + \sqrt[3]{\frac{-b - \sqrt{b^2 - 4ac}}{2a}}
$$

### Matrix
### Matrix Product
The product AB between matrices 
$$
A \in R_m\times_l\  and B \in R_l \times _n
then \ C \in R_m \times _n
$$

$$
c_ij = \sum_{k=1}^l a_ik \ b_kj 
$$
#rules

> [!NOTE] Rows and Columns
> The this notation
>$$ R_m \times _l $$
> The `m` represents the rows and `l` represents the columns
> To perform **multiplication of two matrices**, we should make sure that the number of columns in the 1st matrix is equal to the rows in the 2nd matrix.





![](https://www.mathsisfun.com/algebra/images/matrix-multiply-a.svg)


```rust
use ndarray::arr2; 
fn main() { 
let a = arr2(&[[1, 2, 3], [4, 5, 6]]);
90let b = arr2(&[[6, 3], [5, 2], [4, 1]]); println!("{}", a.dot(&b)); }
```


#### Reduced Row Echelon Form

[[Science/Maths/Gauss–Jordan elimination]]

 
### Matrix Multiplication

### Determinant

$$
det(A) = |A| = \begin{vmatrix}
a & b & c\\
d & e & f\\
g & h & i
\end{vmatrix} = a\begin{vmatrix}
e & f\\
h & i
\end{vmatrix} - b\begin{vmatrix}
d & f\\
g & i
\end{vmatrix} + c\begin{vmatrix}
d & e\\
g & h
\end{vmatrix}
$$
[Source](https://youtu.be/aAFP5wsmH2k?si=6OVmgu5MlKmEk48q)



### Mandelbrot Set



$$
f(z_{n+1}) = {z_n}^2 \ + c
$$
- Where `C` is the complex number
> Points inside the Mandelbrot set remain bounded under this iteration
> 

```python
# Mandelbrot
import numpy as np
import matplotlib.pyplot as plt

def compute_mandelbrot(N_max, some_threshold, nx, ny):
    # Create a grid of c-values
    x = np.linspace(-2, 1, nx)
    y = np.linspace(-1.5, 1.5, ny)
    c = x[:, np.newaxis] + 1j * y[np.newaxis, :]

    # Mandelbrot iteration
    z = c
    for j in range(N_max):
        z = z**2 + c

    # Determine membership in the Mandelbrot set
    mandelbrot_set = (abs(z) < some_threshold)
    return mandelbrot_set

# Compute the Mandelbrot set
mandelbrot_set = compute_mandelbrot(50, 50., 601, 401)

# Plot the Mandelbrot set
plt.imshow(mandelbrot_set.T, extent=[-2, 1, -1.5, 1.5])
plt.gray()
plt.show()

```

