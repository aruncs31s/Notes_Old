---
id: Vector Algebra
aliases: []
tags: []
---

# Vector Calculus 

## Contents
- [[#Basics Of Vector]]
- [[#Unit Vector]]
- [[#Magnitude of Vector]]
- [[#Resultant of two vectors]]
- [[#Laws]]
  - [[#Triangle Law of Vector Addition]]
  - [[#Parallelogram Law]]
  - [[#Polygon Law]]
- [[#Vector Algebra]]
	- [[#Dot Product]]
	- [[#Cross Product]]
- [[#Vector Identities]]

## Basics Of Vector

A scalar is a quantity that has only magnitude ,eg: `time`, `mass` , `distance` , and a ==vector is a quantity which has both magnitude and direction==, eg: `Velocity`,`force` ,`displacement`

$$
\overrightarrow A =A_{x}\hat a_{x}+A_{y}\hat a_{y}+A_{z}\hat a_{z}
$$

##### Magnitude of Vector

$$
A = | \overrightarrow A | = \sqrt{A_{x}^2+ A_{y}^2 + A_{z}^2}
$$

> [!NOTE] Basis of A vector
> $\large \hat i$, $\large \hat j$ are ==basis vectors== of $xy$ coordinate system

#### Unit Vector

It is defined as a vector whose magnitude is unity and direction is along $\overrightarrow A$

$$
\hat a_{A} = \frac{\overrightarrow A}{|\overrightarrow A|} = \frac{\overrightarrow A}{\overrightarrow A}
$$

$$
\overrightarrow A = A\  \hat a_{A}
$$
### Laws
#### Triangle Law of Vector Addition

![[Law of Triangle.excalidraw]]

> In the first case the both $\overrightarrow A$ and $\overrightarrow B$ their direction is anti clockwise so the direction of resultant vector is in ==tail to head==

> In The Second case the $\overrightarrow A$ is clockwise $\overrightarrow B$ is anticlockwise and $\overrightarrow C$ is clockwise
> $\therefore \overrightarrow A + \overrightarrow C - \overrightarrow B = 0$



#### Resultant of two vectors

![[Resultant of two vectors.excalidraw]]
#calculation

$$
\begin{align*}
\overrightarrow C \cdot \overrightarrow C &= C^2\\
&= (\overrightarrow A + \overrightarrow B) \cdot (\overrightarrow A + \overrightarrow B) \\
&= A^2 + B^2 + 2 \overrightarrow A \cdot \overrightarrow B \\
&= A^2 + B^2 + 2AB\cos\theta
\end{align*}
$$

> Where $\theta$ is the angle between $\overrightarrow A \& \overrightarrow B$

#### Parallelogram Law

#### Polygon Law

### Vector Algebra

- [[#Vector Addition]]
- [[#Dot Product]]
- [[#Cross Product]]

#### Vector Addition

- If $\overrightarrow A = A_{x}\hat a_{x}+A_{y}\hat a_{y}+A_{z}\hat a_{z}$ and $\overrightarrow B = B_{x}\hat a_{x}+B_{y}\hat a_{y}+B_{z}\hat a_{z}$
  $$
  \overrightarrow A +\overrightarrow B = (A_{x} \pm B_{x})\hat a_{x}+(A_{y} \pm B_{y})\hat a_{y}+(A_{z} \pm B_{y })\hat a_{z}
  $$
  ![[Vector Adition.excalidraw]]
- Reference ![[newvideo.mp4| Vector addition]]

#### Dot Product

$$
\overrightarrow A . \overrightarrow B  = |A||B| \cos\theta
$$


> Where $\theta$ is the smaller angle between **A** and **B**

> - IF we have 2 vectors $A$ and $B$ where $\overrightarrow A = A_{x}\hat a_x+A_{y}\hat a_y+A_{z}\hat a_z$ and $\overrightarrow B= B_{x}\hat b_x+B_{y}\hat b_y+B_{z}\hat b_z$ then $\overrightarrow A \cdot \overrightarrow B$ will be equal to 
>$$
\overrightarrow A \cdot \overrightarrow B = A_{x}B_{x}+ A_y B_{y} + A_z B_z
>$$

##### Properties 
1. $\overrightarrow A \cdot  \overrightarrow B = \overrightarrow B \cdot  \overrightarrow A$
2. $\hat i \cdot  \hat i = \hat j \cdot  \hat j = \hat k \cdot  \hat k = 1$
>This happens because the angle between $\hat i$ and the same $\hat i$ is $0$ then by definition $\hat i \cdot  \hat i = |\hat i | | \hat i|\cos\theta$ where $\theta =0$ => $\cos\theta = 1$ => $\hat i \cdot  \hat i = 1$
- If $\overrightarrow A . \overrightarrow B = 0$ then $\overrightarrow A$ and $\overrightarrow B$ are said to be `Orthogonal` or `perpendicular`
3. Similarly
$$
\hat{i} \cdot \hat{j} = \hat{j} \cdot \hat{k} = \hat{k} \cdot \hat{i} = 0
$$




#### Cross Product

$$
\overrightarrow A \times \overrightarrow B  = (AB \sin\theta)a_n
$$

> Where $\theta$ is the smaller angle between **A** and **B**
> $a_n$ is the unit vector normal to the plane determined by $A$ and $B$ when they are drawn form common point 
> - *output of a vector product will be also a vector* 

> IF we have 2 vectors $A$ and $B$ where $\overrightarrow A = A_{x}\hat a_x+A_{y}\hat a_y+A_{z}\hat a_z$ and $\overrightarrow B= B_{x}\hat b_x+B_{y}\hat b_y+B_{z}\hat b_z$ then $\overrightarrow A \times  \overrightarrow B$ will be equal to
>$$
\overrightarrow A \times \overrightarrow B = \begin{vmatrix}
\hat i & \hat j & \hat k \\ 
A_x & A_y & A_z  \\ 
B_{x}& B_{y}& B_{z} 
\end{vmatrix}
>$$

^ef84ac




> also $A \times B$ can be written in [[Matrices#Determinant|Determinant]] form

$$
\overrightarrow A \times \overrightarrow B = \left| \begin{array}{ccc}   a_{x} &  a_{y} &  a_{z} \\ A_x & A_y & A_z \\  B_x & B_y & B_z \end{array}  \right|
$$
![[A cross B right hand thumb rule]]
> [!Note] From 3Blue1Brown
>$$
\overrightarrow v \times \overrightarrow w = det{\left(\begin{bmatrix}  
x & v_{1} & w_{1} \\ y & v_{2} & w_{2} \\ z  & v_{2} & w_{3}
 \end{bmatrix}\right)}
>$$

^00a0e7

  
> [!NOTE] Funny Note
> Both Method from 3Blue1Brown [[#^00a0e7|3Blue1Brown]] and [[#^ef84ac|Determinant Method]] gives the same result 
> ->Proof
>```python
import numpy as np
v = np.array([1,2,3])
w = np.array([2,3,32])
basis = np.array([1,1,1])
determinant_1 = np.linalg.det([basis,v,w])
print(determinant_1)
v = v.transpose()
w = w.transpose()
basis= basis.transpose()
determinant_2 = np.linalg.det([basis,v,w])
print(determinant_2)
x = print("Results are same") if (determinant_2 == determinant_1) else  print("Results are not same")  	
>```


##### Properties
1. 
$$
A \times B = - B \times A
$$
2. 
$$
   \hat i \times \hat i = \hat j \times \hat j = \hat k \times \hat k = 0 
$$
> This happens because the angle between $\hat i$ and the same $\hat i$ is $0$ then by definition $\hat i \times \hat i = |\hat i | | \hat i|\sin\theta$ where $\theta =0$ => $\sin\theta = 0$ => $\hat i \times \hat i = 0$ 
3. Similarly 
$$
\hat{i} \times \hat{j} = \hat{j} \times \hat{k} = \hat{k} \times \hat{i} = 1
$$

#### Properties 
1. Scalar Triple Product
$$
\overrightarrow{A} \cdot \left(\overrightarrow{B}  \times \overrightarrow{C} \right)  = \overrightarrow{B} \cdot \left(\overrightarrow{C} \times \overrightarrow{A} \right) = \overrightarrow{C} \cdot \left(\overrightarrow{A} \times \overrightarrow{B} \right) = det(ABC)
$$

2. Vector Triple product ,cyclic permutation identity or the BAC-CAB rule
$$
\overrightarrow{A} \times \left(\overrightarrow{B}  \times \overrightarrow{C} \right)  = \overrightarrow{B} \cdot \left( \overrightarrow{A} \cdot  \overrightarrow{C} \right) -  \overrightarrow{C} \cdot \left(\overrightarrow{A} \cdot \overrightarrow{B} \right)
$$
#### Scalar Multiplication
- If we have vector given by $\overrightarrow A$
$$
\overrightarrow A =  A_{x}\hat a_x+A_{y}\hat a_y+A_{z}\hat a_z
$$
> Then **Scalar Multiplication** is 
$$
\overrightarrow Y = k \ \overrightarrow A
$$
> Only magnitude will get changed 



### Vector Identities 
1. 
$$
\nabla .(\overrightarrow A \times \overrightarrow B) = \overrightarrow B (\nabla \times \overrightarrow A)
$$
^2c0ce5



#### Projection of vectors 
- Projection of vector $\overrightarrow A$ on $\overrightarrow B$ is $A \cos \theta$
- Projection of vector $\overrightarrow B$ on $\overrightarrow A$  is $B \cos \theta$

#### Position Vector $r_p$ 
Position vector of a point is the directed distance from the origin '0'to Point 'P' 

![[position vector drawing]]

$$
\hat r_{p} = OP = x \hat{a}_{x}+ y\hat{a}_y+ z\hat{a}_z
$$
It used to find the position of a vector in space 
#eg 
$\overrightarrow{P} =(1,2,3) = 1a_{x}+ 2a_y+3a_z$
#### Distance Vector
It is the displacement from one point to another. 
![[distance Vector]]
Consider two point **P** and **Q** , the distance vector is the displacement from **P** to **Q**
Hence
$$
\begin{align*}
r_{PQ} &= \overrightarrow{r}_{Q} - \overrightarrow{r}_{P}\\
&= (Q_{x}-P_{x})a_{x}+ (Q_{y}- P_y)a_{y}+(Q_{z}-P_{z})a_z
\end{align*} $$
