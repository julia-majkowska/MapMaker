mapa* wczytaj_mape_z_pliku(char* nazwa){//nie ma na razie maxval - do testow
    FILE* plik = fopen(nazwa, "r");
    int h, w;
    fscanf(plik, "%d %d", &h, &w);
    mapa* m = stworz_nowa_mape(h, w);
    for(int i = 0; i<m->h; i++)
        for(int j = 0; j<(m->w); j++){
            fscanf(plik, "%d", &(m->obraz)[i][j]);
        }
    return m;
}

int minimum(int a, int b){
    if(b<a) return b;
    return a;
}

int maximum(int a, int b){
    if(a>b) return a;
    return b;
}