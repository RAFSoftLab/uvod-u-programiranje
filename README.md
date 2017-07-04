# Uvod u programiranje

## Lekcije
Format lekcije je Markdown. Mozete koristiti neki online editor (recimo http://dillinger.io/) ili instalirati odgovarajuci plugin u editoru koji preferirate.

Za matematicke formule i oznake moguce je koristiti TeX (podrzan kroz MathJax bibiloteku). Formule mozete validirati na https://www.mathjax.org/#docs u delu `Features & benefits` > `Modular Input & Output` > `Try a live demo.`

Svaka lekcija je poseban `.md` fajl koji nosi naziv lekcije. U naziv fajla treba ukljuciti i redni broj lekcije unutar kursa (primer: `01_Promenljive.md`).

## Zadaci
 Pogledati `_zadatak_template/README.md` za vise informacija o formatu zadatka. Folder `04_baza` je primer jednog zadatka u odgovarajucem formatu.

Za svaku lekciju treba napraviti folder koji nosi isti naziv kao `.md` fajl lekcije (bez ekstenzije). Unutar tog foldera treba staviti sve zadatke vezane za lekciju:

1. Iskopirati `_zadatak_template` u folder lekcije
2. Preimenovati folder u ime zadatka sa rednim brojem kao prefiksom (primer: `04_baza`)
3. Izmeniti odgovarajuce fajlove i dodati test primere

Za `.md` fajlove zadatka vaze iste stvari kao za fajlove lekcija. Za primere sa papira treba koristi naznacenu sintaksu posto ona ima prilagodjen html prilikom prikazivanja.

### Tekst zadatka
Tekst zadatka treba da bude dovoljno precizan da je za svaku specijalnu situaciju iz samog teksta jasno kako treba postupiti ili naglasiti da se ta situacija nece pojaviti u primerima. Recimo da li parametar `N` moze da bude 0? Treba objasniti kako postupiti u tom slucaju ili naglasiti `N > 0`.

### Test primeri
Dobra praksa za pravljenje test primera je da se nekoliko primera napravi rucno tako da pokriju sve specijalne slucajeve, a ostatak (ne treba preterivati, 10-20 primera je sasvim dovoljno) treba generisati random. U repou se nalazi i random test generator koji mozete da prilagodite konkretnom zadatku.

S obzirom da je rec o kursu uvoda u programiranje, nema potrebe praviti velike test primere koji treba da testiraju performanse resenja (jer studenti nisu upoznati sta je to slozenost algoritma).

Kako bi izbegli situaciju da neko pokusava da resi zadatak jako dugo i ne uspeva jer su primeri neispravni, najbolje je da postoje dva resenja za svaki zadatak, jedno od autora i drugo od testera. Dobra praksa je da tester ne gleda autorovo resenje vec da samostalno resava zadatak kako bi se testiralo i razumevanje problema na osnovu napisanog teksta. 

## Ostalo

Za sve nedoumice: `markobakovic95@gmail.com`
