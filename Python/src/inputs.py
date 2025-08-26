from os import system

def pedir_nombre():
    nomb=input("Por favor dime tu nombre")
    return nomb

def pedir_edad():
    edad = int(0)
    while True: #Esto hara que el while pare cuando edad adquiera un valor valido
        try:
            edad = int(input("Ingresa tu edad"))
            if edad > 200 or edad < 0:
                raise ValueError()
            break
        except ValueError:
            print("Corrige tu edad")
    return edad

def pedir_estatura():
    estatura = float(0)
    while True:
        try:
            estatura = float(input("Ingresa tu estatura en metros"))
            if estatura == 0 or estatura > 2.10 or estatura < 0:
                raise ValueError()
            break
        except ValueError:
            print("Vuelva a ingresar su estatura")
    return estatura

def estudias():
    est = str(0)
    while True:
        try:
            est = input("¿Estudias?\n")
            est = est.lower()
            if est not in ["si","no"]:
                raise ValueError()
            break
        except ValueError:
            print("Ingrese si o no por favor")
    if est == "si":
        est = True
    else:
        est = False
    return est
if __name__ == "__main_":
    print("Probando inputs")
