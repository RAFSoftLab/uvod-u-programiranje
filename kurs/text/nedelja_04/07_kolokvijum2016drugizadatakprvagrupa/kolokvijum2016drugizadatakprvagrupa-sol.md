## Analiza
Koristićemo funkciju getchar() da prođemo kroz svaki karakter u tekstu koji korisnik unosi. Potrebna nam je celebrojna promenljiva koja će označavati konačan rezultat izraza. Takođe nam je potrebna promenljiva broj koja će označavati trenutni broj u tekst. Potrebna nam je još promenljiva koja je označavati da li je potrebno sabirati ili oduzimati brojeve(op:na početku je +).
U while petlji, koja će se vrtiti sve dok korisnik ne unese '\n' (enter), u kojoj ćemo proci kroz ceo tekst, proveriti da li je učitani karakter cifra, ukoliko jeste dodajemo tu cifru na trenutni broj ( broj = broj * 10 + c-'0'). Ukoliko karakter nije cifra znaci da je ili + ili -, pa je potrebno izvršiti trenutnu operaciju(promenljiva op), i u zavisnosti da li je op=+ ili op=- mi ćemo dodati ili oduzeti trenutni broj na ukupan rezultat(resenje). Takođe je potrebno vratiti broj na nulu, jer broj čine samo cifre od 0 do 9, a mi smo naišli na znak + ili -. I još, potrebno je zapamtiti tu novu operaciju(op=c). Nakon završene while petlje, primetimo da se izraz uvek završava cifrom, a ne operacijom, što znaci da moramo izvršiti poslednju operaciju(dodati ili oduzeti trenutni broj na ukupno rešenje).