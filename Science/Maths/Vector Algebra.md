<h1 align="center">Vector Algebra</h1>

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
>  


#### Unit Vector
It is defined as a vector whose magnitude is unity and direction is along $\overrightarrow A$

$$
\hat a_{A} = \frac{\overrightarrow A}{|\overrightarrow A|} = \frac{\overrightarrow A}{\overrightarrow A} 
$$

$$
\overrightarrow A = A\  \hat a_{A}
$$

#### Law of Triangle
![[Law of Triangle.excalidraw]]
> In the first case the both $\overrightarrow A$ and $\overrightarrow B$ their direction is anti clockwise so the direction of resultant vector is in ==tail to head==

>In The Second case the $\overrightarrow A$ is clockwise $\overrightarrow B$ is anticlockwise and $\overrightarrow C$ is clockwise 
>$\therefore \overrightarrow A + \overrightarrow C - \overrightarrow B = 0$
>
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
\overrightarrow A . \overrightarrow B  = AB \cos\theta 
$$
> Where $\theta$ is the smaller angle between **A** and **B** 
- If $\overrightarrow A . \overrightarrow B = 0$ then $\overrightarrow A$ and $\overrightarrow B$ are said to be `Orthogonal` or `perpendicular`
#### Cross Product
$$
\overrightarrow A \times \overrightarrow B  = (AB \sin\theta)a_n 
$$
>  Where $\theta$ is the smaller angle between **A** and **B** 
> $a_n$ is the unit vector normal to the plane determined by $A$ and $B$ when they are drawn form common point 

$$
A \times B = - B \times A
 $$

> also $A \times B$ can be written in [[Maths#Determinant|determinant]] form 

$$
A \times B = \left| \begin{array}{ccc}   a_{x} &  a_{y} &  a_{z} \\ A_x & A_y & A_z \\  B_x & B_y & B_z \end{array}  \right|
$$

