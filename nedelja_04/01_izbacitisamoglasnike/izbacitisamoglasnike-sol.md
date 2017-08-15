## Analiza
Koristicemo funkciju getchar() da prodjemo kroz svaki karakter u tekstu koji korisnik unosi. U while petlji, koja ce se vrtiti sve dok korisnik ne unese '\n' (enter), provericemo da li je uneto slovo veliko ili malo, i pretvoricemo ga u malo. Ovaj postupak radimo da bismo smanjili broj uslova u sledecem if-u, jer je onda potrebno samo pet uslova a ne deset(5 samoglasnika, *2 jer mogu biti i mala i velika slova).
Ukoliko je pretvoreno malo slovo nije jednako nijednom samoglasniku, potrebno je ispisati taj karakter( koristeci putchar).
