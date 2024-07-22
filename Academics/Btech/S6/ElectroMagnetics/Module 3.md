# Module 3
## Contents
 - [[#Syllabus]]
 - 

## Syllabus
- Propagation of plane EM wave in 
	- perfect dielectric
	- lossy medium
	- good conductor
	- media- attenuation
	- phase velocity
	- group velocity
	- skin depth.
- Reflection and refraction of plane electromagnetic waves at boundaries for normal & oblique incidence (parallel and perpendicular polarization)
- Snell’s law of refraction, Brewster angle.

## Short Equations 



| Var                             | Val                                                 |
| ------------------------------- | --------------------------------------------------- |
| $$\lambda$$                     | $$2\pi \over \beta$$                                |
| $$\beta$$                       | $$\omega \sqrt{\mu \epsilon }$$                     |
| $$\epsilon $$                   | $$\epsilon_0 \cdot \epsilon_r $$                    |
| $$\mu$$                         | $$\mu_0 \cdot\mu_r$$                                |
| $$c$$                           | $${1 \over \sqrt{\mu_r\epsilon_r} }= 3\times 10^8$$ |
| $$v$$                           | $$\omega  \over \beta$$                             |
| $$\eta$$                        | $$\sqrt{\mu \over \epsilon }$$                      |
| $$\sqrt{\mu_0\over\epsilon_0}$$ | $$120\pi$$                                          |

#### Introduction

###### Wave
-  *waves are means of transporting energy or information.*
- *A wave is a function of both space and time.*

*This chapter our major goal is to solve Maxwell's equations and describe EM wave motion in the following media:*
1. Free space $( \sigma = 0,\large \epsilon = \epsilon_0 , \large \mu  = \mu_0)$
2. Lossless dielectrics $(\sigma \approx  0 , \epsilon = \epsilon_r\epsilon_0 , \mu = \mu_r\mu_0)$
3. Lossy dielectrics $(\sigma \neq 0 , \epsilon = \epsilon_r \epsilon_0 , \mu = \mu_r\mu_0)$
4. Good conductors$(\sigma = \infty , \epsilon = \epsilon_0 , \mu = \mu_r\mu_0 \ or \  \sigma \gg \omega\epsilon)$

- $\omega$ : is the angular frequency of the wave


### Reflection and Refraction of electromagnetic wave


#### Poynting Vector

^1fe371

Poynting Vector Denoted by $\overrightarrow S$  is given by the *vector product* of $\overrightarrow E \ \& \overrightarrow H$
 $$ \overrightarrow S = \overrightarrow E \times \overrightarrow H $$

> Pointing Vector measures the rate of flow of energy of the wave as it Propagates. The direction of $\overrightarrow S$ represents the direction of power flow and it is perpendicular to the plane containing $\overrightarrow E \ \& \ \overrightarrow H$


#### Poynting Theorem

^48dd7d

When ==electromagnetic wave Propagates through space, there will be a transfer of energy==. There exist a simple and direct relation between the rate of this energy transfer and the amplitudes of $E \ \& \ H$


##### Statement
> The Vector product of electric field intensity and magnetic field intensity at any point is a measure of the rate of energy flow per unit area at the point.


##### Derivation
Consider the field intensities $\overrightarrow E \ \& \overrightarrow H$ from [[Academics/Btech/S6/ElectroMagnetics/Module 2/Module 2#Maxwell's Equations|Maxwell's Equations]]

1. $$\nabla \times \overrightarrow E = \frac{- \partial \overrightarrow B}{\partial t} = \frac{- \mu \partial \overrightarrow H}{\partial t}$$

2. $$ \begin{align*}
\nabla \times \overrightarrow H = \overrightarrow J &= \sigma \overrightarrow E + \frac{\partial \overrightarrow D}{\partial t} \\
&= \sigma \overrightarrow E + \epsilon \frac{\partial \overrightarrow E}{\partial t}
\end{align*}
   $$
   
> We know the Poynting vector
$$ \overrightarrow S = \ \overrightarrow E \times \overrightarrow H$$
Taking Dot product on both voltage 
$$\nabla \cdot \overrightarrow S = \nabla .\ (\overrightarrow E \times \overrightarrow H)$$
>By  [[Vector Calculus#^2c0ce5|Vector Identity]]

$$\nabla . (\overrightarrow E \times \overrightarrow H) = \overrightarrow H .(\nabla \times \overrightarrow E) - \overrightarrow E .(\nabla \overrightarrow H)$$


5. Substituting the values$$
\nabla .(\overrightarrow E \times \overrightarrow H) = \overrightarrow H .(\frac{\mu \partial \overrightarrow H}{\partial t} ) - \overrightarrow H ( \sigma \overrightarrow E + \frac{\partial \overrightarrow D}{\partial t})
$$

$$
= -\mu \overrightarrow H . \frac{\partial \overrightarrow H}{\partial t} - \sigma E^2 + \overrightarrow E . {\partial \overrightarrow E \over \partial t} \ \ \ \ \ \ \ \ \ \ \ \ (1)
$$

 ^faf03e
6. Let by [[Differential Equations#Product Rule]]
$$
{\partial (\overrightarrow H . \overrightarrow H) \over \partial t} = \overrightarrow H {\partial \overrightarrow H \over \partial t} + \overrightarrow H {\partial \overrightarrow H \over \partial t}$$
$$
= 2 . \overrightarrow H . {\partial \overrightarrow H \over \partial t}
$$
>Since the cross product $|\overrightarrow{H} \times \overrightarrow{H}| = H^2$

$$
\therefore \overrightarrow H {\partial \overrightarrow H \over \partial t} = {1 \over 2} {\partial( \overrightarrow H . \overrightarrow H) \over \partial t } = {1 \over 2} {\partial( H^2) \over \partial t }  \ \ \\ \ \ \ \ \ (A)
$$ 

^ec7bb9


> [!WARNING]
> - The magnitude of the cross product is related to the magnitude of **H**: $|\overrightarrow{H} \times \overrightarrow{H}| = H^2$ but
> - In Geometric Interpretation
> 	->  Geometrically, when we take the cross product of a vector with itself, the resulting vector is **zero** (since the angle between them is zero).
> 	-> Therefore, the magnitude of this zero vector is also zero: $|\overrightarrow{H} \times \overrightarrow{H}| = 0$
> - ==while the cross product itself is zero, its magnitude squared is indeed equal to the square of the magnitude of vector **H**==
> - In summary, we have: $\overrightarrow{H} \times \overrightarrow{H} = \overrightarrow{0}  |\overrightarrow{H} \times \overrightarrow{H}| = H^2$


7. Substituting [[  BTech/S6/ElectroMagnetics/Module 3#^ec7bb9|A]] in [[  BTech/S6/ElectroMagnetics/Module 3#^faf03e|1]]
$$
\nabla (\overrightarrow E \times \overrightarrow H) = {-\mu \over 2 } {\partial H^2 \over \partial t} - \sigma E^2 - {\epsilon \partial E^2 \over 2\partial t} \ \ \ \because {\overrightarrow E . \partial \overrightarrow E \over \partial t } = {1 \over 2} {\partial E^2 \over \partial t} \ \ \ \ (2 )
$$

8. Taking Integral on both sides
$$
\int \nabla .(\overrightarrow E \times \overrightarrow H) dv = -{\partial \over \partial t} \int_{v} [{1 \over 2}\epsilon E^2 + {1 \over 2} \mu H^2]dv - \int_{v} \sigma E^2 dv$$

9. Applying the Divergence Theorem to LHS
$$
\oint_{s} (\overrightarrow E \times \overrightarrow H) .ds =-{\partial \over \partial t} \int_{v} [{1 \over 2}\epsilon E^2 + {1 \over 2} \mu H^2]dv - \int_{v} \sigma E^2 dv
$$

in words
==Toltal power leaving the volume = Rate of dicrease in energy stored in electric and magnetic fields  - Ohmic power dissipated==


This equation is known as **[[#^48dd7d|Poynting Theorem]]** and the quantity 
$\overrightarrow E  \times \overrightarrow H$ is know as [[#^1fe371| Poynting Vector]] 
$$
P = \overrightarrow E  \times \overrightarrow H
$$


> [!Summary] Summary
> [[#^48dd7d|Poynting's Theorem]]  states that the ==net power flowing out of a given volume V = the time rate of decrease in the energy stored within V - Conductor loss==
> 


----

<h4 align="center" >Reflection of plane wave At Normal incidence</h4>

##### Deflection By Dielectric - Normal Incidence






