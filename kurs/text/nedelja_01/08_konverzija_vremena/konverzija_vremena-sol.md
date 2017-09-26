## Analiza

Sa standardnog ulaza se učitava vrednost vremenskog intervala u sekundama u vidu celog broja. Broj sati se računa tako što se vremenski interval u sekundama celobrojno podeli sa 3600, tj. vrednosti jednog sata u sekundama. Zatim se vremenski interval u sekundama smanji na ostatak pri deljenju sa 3600 (ostale sekunde se ne mogu pretvoriti u sate). Računanje minuta se vrši po istom principu i to celobrojnim deljenjem sa 60, vrednosti jednog minuta u sekundama. Vrednost preostalog dela intervala u sekundama se smanji na ostatak pri deljenju sa 60 (ostale sekunde se ne mogu pretvoriti u minute).

sati = sekunde / 3600
sekunde %= 3600
minuti = sekunde / 60
sekunde %= 60
