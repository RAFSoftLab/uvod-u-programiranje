## Анализа

Takodje, kao i kod prošlog primera, problem ovih razlomaka možemo podeliti na potprobleme na sledeći način:

![alt text](media/nedelja_06/razlomci2-sol.png)

Plavi problem možemo da rešimo, crveni problem i dalje ne znamo da rešimo.
Sa njim će se pozabaviti rekurzija. Nama je potreban samo bazni primer.
Pošto kod ovog problema se krećemo unapred, moramo imati neki brojač, koji će nam reći kada smo stigli do odgovarajućeg broja **n**. Brojač ćemo takodje proslediti funkciji, a bazni primer će nam biti kada brojač stigne do broja **n**, tada znamo da treba da vratimo rezultat **n**.

Što se iterativnog dela tiče, nemamo način da se krećemo kad dole, tako da moramo krenuti od najdubljeg razlomka, a to je sam broj **n**, i na gore računati preostale razlomke. Kada stignemo do broja 1, znamo da treba da završimo sa petljom. Sve vreme u toku prolaska kroz iteracije osvežavamo rezultat razlomačkog dela.


## Смернице за алгоритам
