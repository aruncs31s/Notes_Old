---
id: Fourier Series and Transform
cssclasses:
  - wide-page
tags:
---

>[!important|right] Topics
>- [[#Fourier Series]]
>- [[#Fourier Transform]]
>- [[#Inverse Fourier Transform]]
>- [[#Discrete-Time Fourier Series]]
>- [[#Discrete Fourier Transform(DFT)]]


### Fourier Series

The Fourier series is a mathematical tool used to ==represent a periodic function as the sum of simple sine and cosine functions==. It is named after Jean-Baptiste Joseph Fourier, who introduced the concept in the early 19th century. The Fourier series is particularly useful for ==analyzing signals that are periodic in nature==.
`FS` is represented by $f(t)$ with time period $T$ and it is equal to

$$
f(t) = \frac{a_0}{2} + \sum_{n=1}^{\infty} \left[a_n \cos(n\omega_0 t) + b_n \sin(n\omega_0 t)\right]
$$

or

$$
x(t) = \sum_{k=-\infty}^\infty X[k]e^{jk\omega_0t}
$$

and


$$
X[k] = {1 \over T} \int_{(t)} x(t)e^{-j\omega_0t} dt
$$


> [!IMPORTANT|right] Applicability
> `Fourier Series` is only used for periodic signals 


$x(t)$ has period T and $\omega_0 = {2 \pi \over T}$

### Discrete-Time Fourier Series

$$
x[n] = \sum_{K=0}^{N} X[k]e^{j\Omega_0 n}
$$

$$
X = {1 \over N} \sum_{n=0}^{N} x[n]e^{-jk\Omega_0n}
$$

_$x[n]$ and $X[k]$ have period $N$_

$$
\Omega_0 = {2 \pi \over N}
$$

### Fourier Transform
> [!NOTE|right] FT
> The Fourier Transform decomposes a signal into its constituent
> frequencies, allowing for the analysis of the signal's frequency
> components
where

The Fourier Transform is a mathematical technique used in signal processing and image analysis, among other fields, ==to transform a function of time (a signl) into a function of frequency==

$$
F(\omega) = \int_{-\infty}^{\infty} f(t) e^{-j\omega t} dt\
$$
- $F(\omega)$ Fourier transform coefficient of $f(t)$
- $\omega$ is the Frequency

#### Inverse Fourier Transform

$$
f(t) = \frac{1}{2\pi} \int_{-\infty}^{\infty} F(\omega) e^{j\omega t} d
\omega\
$$

#### Discrete Fourier Transform(DFT)

- **DFT** of a finite duration sequence $x[n]$ is obtained by sampling **[[#Discrete-Time Fourier Transform|DTFT]]** at **N** equally spaced points over the interval $0\le \omega \le 2\pi$ with spacing $2\pi \over N$

> [!NOTE] Spacing
> The Spacing in the [[#Discrete Fourier Transform(DFT)|DFT]] increases with decrease in the no of sampling points taken , if the N = 4 , The points will be $\large0,{\pi\over 2},\pi,{3 \pi \over 2}$
>
> - The N points should be located at $$\omega_k = {2\pi \over N} k$$ ,where $k = 1,2,3,.....,N-1$

- [ ] Complete this above statement

#equation

$$
X(k) = X(e^{jw}) \ , \omega = {2\pi \over N} k
$$
