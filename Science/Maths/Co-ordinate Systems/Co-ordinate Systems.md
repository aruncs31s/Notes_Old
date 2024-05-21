---
id: Co-ordinate Systems
aliases: 
tags:
  - todo
---

# Co-ordinate Systems

Created : 2024-05-12 22:34

## Contents

- [[#Cartesian Coordinate System]]
- [[#Cylindrical Coordinate System]]
- [[#Spherical Coordinate System]]

> [!NOTE] Vectors Vs Points
> Points are usually denoted by $P(P_{x},P_{y})$ without the arrow thing but in the case of vectors it is denoted by $\overrightarrow V(V_{x}, V_{y})$ but the difference lies in the fact that the points are measured from the origin but in the case of **Vectors** it has a _tail_ and an _head_ which specifies the _start_ and the _end_ respectively

### Cartesian Coordinate System

![[Co-ordinate Systems Drawing]]
A Vector in Cartesian Coordinate is denoted By

$$
\overrightarrow A = A_xa_{x}+ A_ya_{y}+ A_{z}a_z
$$

> One can identify the position of third axis using ==law of screw== 

> [!Note] Law of Screw 
> We can find the position or the direction of **x** if only 2 axis are given say **z** & **y**
> and if you rotate from **y** to **z** then the direction of **x** will be positive ie, **i -> j -> k** this manner the direction will be positive  
![[cartesian coordinate 3rd axis]]

### Cylindrical Coordinate System

### Spherical Coordinate System

### Co-ordinate System Conversion

1. Cartesian -> Cylindrical

| Given | Transform                         |
| ----- | --------------------------------- |
| $x$   | $\rho = \sqrt{x^2+y^2}$           |
| $y$   | $\theta = \tan^{-1}(\frac{y}{x})$ |
| $z$   | $z$                               |

2. Cylindrical -> Cartesian ^9663b2

| Given  | Transform           |
| ------ | ------------------- |
| $\rho$ | $x=\rho \cos \phi$  |
| $\phi$ | $y= \rho \sin \phi$ |
| z      | z                   |

3. Cartesian -> Spherical

| Given | Transform                                    |
| ----- | -------------------------------------------- |
| $x$   | $r = \sqrt{x^2 + y^2 + z^2}$                 |
| $y$   | $\theta = \tan^{-1}\sqrt{\frac{x^2+y^2}{z}}$ |
| z     | $\phi = \tan^{-1}\left(\frac{y}{x}\right)$   |

4. Spherical -> Cartesian

| Given    | Transform                     |
| -------- | ----------------------------- |
| $r$      | $x = r \sin \theta \cos \phi$ |
| $\theta$ | $y= r\sin \theta \sin \phi$   |
| $\phi$   | $r \cos \theta$               |

5. Cylindrical -> Spherical

| Given  | Transform                                       |
| ------ | ----------------------------------------------- |
| $\rho$ | $r = \sqrt{\rho^2 + z^2}$                       |
| $\phi$ | $\theta = \tan^{-1}\left(\frac{\rho}{z}\right)$ |
| z      | $\phi = \phi$                                   |

6. Spherical -> Cylindrical

| Given    | Transform             |
| -------- | --------------------- |
| $r$      | $\rho = r\sin \theta$ |
| $\theta$ | $\phi = \phi$         |
| $\phi$   | $z = r \cos \theta$   |


### Matrix Transform 

1. Cartesian -> cylindrical 
$$
\begin{bmatrix}
A_\rho  \\ A_\phi \\ A_z
\end{bmatrix} = \begin{bmatrix}
\cos\phi & \sin\phi & 0 \\ - \sin\phi & \cos\phi & 0  \\ 0 & 0 & 1
\end{bmatrix}
\begin{bmatrix}
A_{x} \\ A_{y}  \\ A_z 
\end{bmatrix}\tag{1}
$$
>if we consider eqn $(1)$ as 
>$$
A_{ca} = \overrightarrow T A_{cy}
>$$
>then 
>$$
\overrightarrow T^{-1} A_{ca} = \overrightarrow I A_{cy} = A_{cy}
>$$
>which is equal to 
>$$
\begin{bmatrix}
A_{x} \\ A_{y}  \\ A_z 
\end{bmatrix}
= \begin{bmatrix}
\cos\phi & - \sin\phi & 0 \\ \sin\phi & \cos\phi & 0  \\ 0 & 0 & 1
\end{bmatrix}
\begin{bmatrix}
A_\rho  \\ A_\phi \\ A_z
\end{bmatrix} 
\tag{2}
>$$
> If we compare both eqn $(1)$ and $(2)$ we can see that it uses the it uses the [[Matrices#^fcc442|Inverse Matrix Property]] 

1. Cartesian -> Spherical 

$$
\begin{bmatrix}
A_{r} \\ A_{\theta}  \\ A_{\phi} 
\end{bmatrix}
= \begin{bmatrix}
\sin\theta \cos\phi & \sin\theta \sin\phi & \cos\theta \\ - \cos\theta \cos\phi  & \cos\theta \sin\phi  & - \sin\theta  \\ - \sin\phi  & \cos\phi & 0
\end{bmatrix}
\begin{bmatrix}
A_\rho  \\ A_\phi \\ A_z
\end{bmatrix} 
\tag{3}
$$
> We can do the same here by Multiplying the inverse of of the transformation matrix 
>$$
\begin{bmatrix} A_{x} \\ A_{y} \\ A_{z}  
\end{bmatrix}
= 
\begin{bmatrix} \sin\theta \cos\phi & \cos\theta \cos\phi & \cos\theta  \\ \sin\theta \sin\phi & \cos\theta \cos\phi & \cos\phi  \\  \cos\theta & - \sin\theta & 0  \end{bmatrix} \begin{bmatrix} A_{r} \\ A_{\theta} \\ A_{\phi} \end{bmatrix}
>$$

## References
   
1.
