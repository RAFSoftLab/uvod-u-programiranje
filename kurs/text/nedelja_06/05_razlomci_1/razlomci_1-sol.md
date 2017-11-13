## Анализа

Pošto se potproblem može razbiti jedan koji znamo (plavi na slici), i jedan koji ne znamo (crveni na slici), možemo primeniti rekurziju.
Bazni slučaj bi nam bio kada je `n = 1`, tada znamo da smo stigli do kraja razlomaka, i možemo vratiti rezultat 1.

![alt text](media/nedelja_06/razlomci1-sol.png)

Iterativno moramo krenuti sa druge strane, i poći od rezultata 1, pa izracunavati razlomke u smeru ka gore.
Kada smo stigli do broja **n** sa kojim sabiramo znamo da je to kraj petlje i vratimo rezultat.

## Смернице за алгоритам
