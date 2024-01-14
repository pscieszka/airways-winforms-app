# Uruchamianie

Aby dało się uruchomić program w trybie debuggowania w visual studio trzeba zainstalować(w vs instalatorze):

- Desktop development with C++
- .NET Framework 4.8 SDK
- .NET Framework 4.8 Targeting Pack
- Opcjonalnie extension cpp / clr

Zapakowany jest też plik .exe, który jest już skompilowany.

# Nazewnictwo

- Cyfra na końcu nazwy oznacza, że jest to klasa .NET, wartość cyfry oznacza zagnieżdżenie formsów
- Brak cyfry oznacza, że jest to klasa w czystym C++.


# Wymagania

- [X] wskaźniki i alokacja pamięci  -> obiekt globalny flights do obslugi danych, obiekt bagazu pasazera
- [X] klasy (minimum 3) 
- [X] dziedziczenie -> wszystkie klasy bagazy dziedzicza po Baggage, kazdy forms dziedziczy z klasy System::Windows::Forms::Form
- [X] polimorfizm dynamiczny -> klasa pasazera posiada wskaznik na obiekt Baggage, ktory przyjmuje SmallBag, CheckedLuggage lub HandLuggage
- [X] szablony -> CalculateCostsClasses.h, szablon funkcji do liczenia kosztu lotow , szablon klasy z koordynatami miast
- [X] przeciążenie metod -> np. przeciazone konstruktury w wiekszosci klas, 3 przeciazenia metody setBaggage() w klasie Passenger
- [X] przeciążenie operatorów -> szablon klasy z koordynatami miast (+ i ==), obiekt flights ( [] ), przeciazenie = w klasie Passenger
- [X] konstruktory, destruktory (jeżeli potrzebne) -> w kazdej klasie
- [X] kontenery -> std::vector, wektor lotow, pasazerow
- [X] binarna "baza danych" - zapis i odczyt z pliku -> cala zaklada save/load
- [X] obsługa błędów — wyjątki -> kazdy input uzytkownia to blok try - catch
- [X] parametry wywołania programu -> brak argumentow = wielkosc okna jest zablokowana, w przeciwnym wypadku nie jest





