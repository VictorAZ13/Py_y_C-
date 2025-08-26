from os import system

def menu():
    while True:
        print("Este es un menu para opciones de ingreso de datos\n")
        print("1. Ingresa tu nombre")
        print("2. Ingresa tu edad")
        print("3. Ingresa tu estatura")
        print("4. Ingresa si estudias")
        print("5. Ver tus datos")
        print("6. Reiniciar datos")
        print("7. Sobreescribir datos")
        print("8. Cargar datos")
        print("9. Ingresar a la calculadora (Solo con los datos completos)")
        print("10. Salir\n")
        try:
            opcion = int(input("Inserte una opción: "))
            if opcion < 1 or opcion > 10:
                raise ValueError
            break
        except ValueError:
            print("Ingrese una opción valida")
            system("cls")
    return opcion

def pausa():
    system("pause")
    
def limpiar():
    system("cls")


if __name__ == "__main__":
    print("Probando que funcione bien utilidades.py")