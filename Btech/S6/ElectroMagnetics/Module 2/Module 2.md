

# Module 2

## Contents

- [[#Todo]]
- [[#Syllabus]]

## Todo

- [ ] Finish the Module
- [ ] Fill the contents menu

## Syllabus

1.  [ ] [[#Derivation of capacitance of 2 wire Line|Derivation of capacitance]] and inductance of two wire transmission line and coaxial cable. 2. [ ] Energy stored in Electric and Magnetic field. 3. [ ] Displacement current density, continuity equation. 4. [ ] Magnetic vector potential. 5. [ ] Relation between scalar potential and vector potential. 6. [ ] Maxwell’s equation from fundamental laws. 7. [ ] Boundary condition of electric field and magnetic field from Maxwell's equations. 8. [ ] Solution of wave equation.

#### Derivation of capacitance of 2 wire Line
![[capacitance of 2 wire line drawing]]
> Potential difference btw conductor _a_ and _b_ is given by
>$$
V_{ab} = \frac{1 }{2 \pi \epsilon} \left[ Q_{a}^{+} \ln \frac{D_{ab}}{D_{aa}} + Q_{b}^{-} \ln \frac{D_{bb} }{D_{ba}}\right]\tag{1}
>$$
>Here $I_{a}= +I , I_{b}=-I$ , $D_{aa} = r$ and $D_{ab}=D$.
> After simplifying using [[Logerithemic#^fceeff|This Property]] and applying the values the equation (2) can be written as
>$$
V_{ab} = \frac{1}{2 \pi \epsilon }Q_{a}^{+} \ln  \left(\frac{D}{r}  \right)^2\tag{3}
>$$
>We know [[Logerithemic#^b6e3a2|This property]] the above equation can be simplified as
>$$
V_{ab}=\frac{Q_a^{+}}{\pi\epsilon } \ln{D \over r}\tag{4}
>$$
>The capacitance between the conductors is
>$$
C_{ab}= \frac{Q_{a}^{+}}{V_{ab} } =  \frac{Q_{a}^+}{\frac{Q_a^{+}}{\pi\epsilon } \ln{D \over r}}\tag{5}
>$$
>$$
\boxed{\color{cyan}
C_{ab}= \frac{\pi \epsilon }{ln{D \over r}}}
>$$

#### Inductance of Two wire
![[Inductance of 2 wire line]]

>In the case of a
> - The Flux linkage of conductor a is given by
>$$
\Psi_{a}= \frac{\mu_{0}}{{2}\pi}  \left[ I_{a} \ln {1 \over D_{aa} } + I_{b}\ln{1 \over D_{ab}}  \right]\tag{1}
>$$
> - Where $I_{a}= +I , I_{b}=-I$ , $D_{aa} = r$ and $D_{ab}=D$. After substituting the this into equation $(1)$
>$$
\Psi_{a}=\frac{\mu_{0}}{2\pi} \left[I  \ln({1 \over r}) -I \ln({1 \over D}) \right]\tag{2}
>$$
> - By using [[Logerithemic#^fceeff|This Property]] equation $(2)$ can be written as
>$$
\Psi_{a} =  \frac{\mu_{0}}{2\pi} \left[I \ln({D \over r}) \right]
>$$
> - The inductance of the conductor
>$$
\boxed{
L_{a} = \frac{\Psi}{L_{ab}} =\frac{\mu_{0}}{2\pi } \ln({D \over r}) }\tag{H/m}
>$$


> In the case of b
> - The flux linkage of conductor b is given by
>$$
\Psi_{b}= \frac{\mu_{0}}{{2}\pi}  \left[ I_{b} \ln {1 \over D_{bb} } + I_a\ln{1 \over D_{ba}}  \right]\tag{1}
>$$
> -  Where $I_{a}= +I , I_{b}=-I$ , $D_{bb} = r$ and $D_{ba}=D$. After substituting the this into equation $(1)$
>$$
\Psi_{b} = \frac{\mu_0}{2\pi} \left[I \ln\frac{1}{r} - I \ln \frac{1}{D}\right]
>$$
> - By using [[Logerithemic#^fceeff|This Property]] we can rewrite the equation as 
>$$
\Psi_{b}= \frac{\mu_{0 }}{2\pi}  I \ln({r \over D})
>$$
> - Now the inductance of the conductor *b* is 
> $$\boxed{L_{a}= \frac{\Psi_{a}}{I} = \frac{\mu_0}{2\pi}\ln({r \over D}) }\tag{H/m}$$
> - $\therefore$ The inductance of both conductor (loop inductance) is 
>$$
\color{cyan}
\boxed{ L_{a} + L_{b} = \frac{\mu_0}{\pi}\ln \frac{D}{r}} \tag{H/m}
>$$

---



- [x] Need to check if the equation is right ✅ 2024-05-20





#### Maxwell's Equations 
 1. [[Ampere's Law]]
 2. [[Faraday's Law of induction]]
 3. [[Gauss's Law]]
 - [ ] Fix this ⏫  
    - Point Form
      - Integral Form
    - Sub title
      - Sub title
        - $\nabla \times \overrightarrow H=\overrightarrow J_{c} + \frac{\partial \overrightarrow D}{\partial t}$
        - $$\oint \overrightarrow H \cdot \overrightarrow dl = \int_s\left(\overrightarrow {J_c}+\frac {\partial \overrightarrow D}{ \partial t}\right)\cdot dS \tag{Ampere's Law}$$
      - Sub title
        - $\nabla \times \overrightarrow E =- \frac{\partial \overrightarrow B}{\partial t}$
        - $$\oint \overrightarrow E \cdot dl = \int_s\left(-\frac {\partial \overrightarrow B}{ \partial t}\right)\cdot dS\tag{Faraday's Law}$$
      - Sub title
        - $\nabla \cdot \overrightarrow D=\rho$
        - $$\oint_s \overrightarrow D \cdot dS = \int_v \rho \ dv \tag{Gauss's Law}$$
      - Sub title
        - $\nabla \cdot \overrightarrow B$
        - $$\oint _s \overrightarrow B \cdot dS = 0 \tag{nonexistance of monopole}$$
      - Sub title
        - Sub title
        - Sub title
  - From Ampere's Circuit Law
  - Maxwell's 1st Equation with Integral Form And Differential Form
    - Prerequisites
      - Sub title
        - 1. [[Gauss's Law]]
      - > From [[Gauss's Law]]
        $$
        \oint D \cdot dS = Q_{enc}\tag{1}
        $$
        For volume charge
        $$
        \int_v \rho_{v}dv = Q_{enc}\tag{2}
        $$
        Where $\rho_v$ is volume charge density
        by comparing equations $(1)$ and $(2)$
        $$
        \oint \overrightarrow D \cdot dS = \int_{v}\rho_{v}dv \tag{A}
        $$
      - > The above equation is known as _Integral form of [[Maxwell|Maxwell's]] First Equation_
      - Sub title
        - [ ] Research and complete the derivation .

## References

- 1.
