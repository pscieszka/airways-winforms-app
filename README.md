# airways-winforms-app

# To do

- Dokonczyc doxygen

- Dodac dane bagazu do zapisu do pliku

- Zmienic input wagi bagazu z int na double




- [X] wskaźniki i alokacja pamięci  -> obiekt globalny flights do obslugi danych, obiekt bagazu pasazera
- [X] klasy (minimum 3) 
- [X] dziedziczenie -> wszystkie klasy bagazy dziedzicza po Baggage, kazdy forms dziedziczy z klasy System::Windows::Forms::Form
- [X] polimorfizm dynamiczny -> klasa basazera posiada wskaznik na obiekt Baggage, ktory przyjmuje SmallBag, CheckedLuggage lub HandLuggage
- [X] szablony -> CalculateCostsClasses.h, szablon funkcji do liczenia kosztu lotow , szablon klasy z koordynatami miast
- [X] przeciążenie metod -> np. przeciazone konstruktury w wiekszosci klas
- [X] przeciążenie operatorów -> szablon klasy z koordynatami miast (+ i ==), obiekt flights ( [] )
- [X] konstruktory, destruktory (jeżeli potrzebne) -> w kazdej klasie
- [X] kontenery -> std::vector, wektor lotow, pasazerow
- [X] binarna "baza danych" - zapis i odczyt z pliku -> cala zaklada save/load
- [X] obsługa błędów — wyjątki -> kazdy input uzytkownia to blok try - catch
- [X] parametry wywołania programu -> brak argumentow = wielkosc okna jest zablokowana, w przeciwnym wypadku nie jest

