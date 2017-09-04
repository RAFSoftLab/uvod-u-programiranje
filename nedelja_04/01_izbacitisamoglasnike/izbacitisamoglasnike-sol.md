## Analiza
Koristićemo funkciju getchar() da prođemo kroz svaki karakter u tekstu koji korisnik unosi. U while petlji, koja ce se vrtiti sve dok korisnik ne unese '\n' (enter), proverićemo da li je uneto slovo veliko ili malo, i pretvorićemo ga u malo. Ovaj postupak radimo da bismo smanjili broj uslova u sledećem if-u, jer je onda potrebno samo pet uslova a ne deset(5 samoglasnika, * 2 jer mogu biti i mala i velika slova).
Ukoliko je pretvoreno malo slovo nije jednako nijednom samoglasniku, potrebno je ispisati taj karakter( koristeći putchar).
