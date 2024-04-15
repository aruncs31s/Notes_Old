### Contents
- [Linear Algebra]()
	- [Properties]
	- [Area]()
		- [Triangle](#area%20of%20triangle)

- [Vector Algebra]()
	- [Dot Product](#dot%20product)
	- 
- [Matrices](#Matrices)
	- [Multiplication](#matrix%20multiplication)


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
- [[Divergence of a Vector]] $\overrightarrow A \ as \  \nabla \textbullet \overrightarrow A$
- [[Curl of a Vector ]] $\overrightarrow A \ as \  \nabla \times \overrightarrow A$
- [[Laplacian of a Scalar V]]

### Vector Algebra
### Dot Product

- If $\overrightarrow A . \overrightarrow B = 0$ then $\overrightarrow A$ and $\overrightarrow B$ are said to be `Orthogonal` or `perpendicular`


### Matrix
#### Matrix Product
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

[[Gauss–Jordan elimination]]

 
##### Matrix Multiplication

[Source](https://youtu.be/aAFP5wsmH2k?si=6OVmgu5MlKmEk48q)