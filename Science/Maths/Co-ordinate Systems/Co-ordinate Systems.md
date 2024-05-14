---
id: Co-ordinate Systems
aliases: []
tags: []
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

### Cylindrical Coordinate System

### Spherical Coordinate System

### Co-ordinate System Conversion

1. Cartesian -> Cylindrical

| Given | Transform                         |
| ----- | --------------------------------- |
| $x$   | $\rho = \sqrt{x^2+y^2}$           |
| $y$   | $\theta = \tan^{-1}(\frac{y}{x})$ |
| $z$   | $z$                               |

2. Cylindrical -> Cartesian

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

## References

1.
