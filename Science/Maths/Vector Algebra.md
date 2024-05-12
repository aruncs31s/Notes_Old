# Vector Algebra
A scalar is a quantity that has only magnitude ,eg: `time`, `mass` , `distance` , and a ==vector is a quantity which has both magnitude and direction==, eg: `Velocity`,`force` ,`displacement`

$$
\overrightarrow A =A_{x}\hat a_{x}+A_{y}\hat a_{y}+A_{z}\hat a_{z}
$$
#### Unit Vector
It is defined as a vector whose magnitude is unity and direction is along $\overrightarrow A$

$$
\hat a_{A} = \frac{\overrightarrow A}{|\overrightarrow A|} = \frac{\overrightarrow A}{\overrightarrow A} 
$$

$$
\overrightarrow A = A\  \hat a_{A}
$$

### Vector Algebra
- [[#Vector Addition]]
- [[#Dot Product]]
- [[#Cross Product]]

#### Vector Addition
- If $\overrightarrow A = A_{x}\hat a_{x}+A_{y}\hat a_{y}+A_{z}\hat a_{z}$ and $\overrightarrow B = B_{x}\hat a_{x}+B_{y}\hat a_{y}+B_{z}\hat a_{z}$
$$
\overrightarrow A +\overrightarrow B = (A_{x} \pm B_{x})\hat a_{x}+(A_{y} \pm B_{y})\hat a_{y}+(A_{z} \pm B_{y })\hat a_{z}
$$



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
