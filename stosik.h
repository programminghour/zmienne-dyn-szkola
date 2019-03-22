
struct element{
    public:
        float dana;
        element *nast;

};

class stos {
  protected:
       element *pierwszy;
  public:
         stos();
    void dodaj(float x);
    void wypisz();
    void usun();
     bool jest(int x);
    ~stos();
};
