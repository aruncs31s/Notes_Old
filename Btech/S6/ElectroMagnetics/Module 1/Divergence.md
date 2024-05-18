# Divergent of a Vector

The Divergence of Vector $\overrightarrow A$ at a given point $P$ is the

#equation 

$$
\nabla \overrightarrow A = \lim_{\Delta V \to 0} \frac{\oint \overrightarrow A \, dS}{\Delta V}
$$

*Where $\Delta V$ - Small differential Volume*




> If the ==Divergence== of a vector field is non zero then that region is said to contain ==source== or ==sync== 


```
source_or_sync = (divergence > 0) ? Source : Sync

```
or
```
 if (divergence = positive){
	 return source ;
 }
else 
	return sync ;

```

#exampleProblem 
> [!Problem] Example 1
> Given the Vector field $A = 5x^{2}\left(\sin \frac{\pi x }{2}\right) \hat a_x$

> [!Answer] Answer 1
> Contents

- [ ] Do 3 #exampleProblem on [[Divergence]]  
