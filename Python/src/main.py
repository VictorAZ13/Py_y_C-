import os
from inputs import pedir_edad,pedir_nombre,pedir_estatura,estudias
from utilidades import limpiar,menu,pausa
opcion = None
nomb = None
edad = None
estatura = None
est = None
datos_guardados = False
while True:
    limpiar()
    opcion = menu()
    limpiar()
    if opcion == 1:
        nomb = pedir_nombre()
        limpiar()
    elif opcion == 2:
        edad = pedir_edad()
        limpiar()
    elif opcion == 3:
        estatura = pedir_estatura()
        limpiar()
    elif opcion == 4:
        est = estudias()
        limpiar()
    elif opcion == 5:
        if nomb is None or edad is None or estatura is None or est is None:
            print("Ingrese los datos completos")
            pausa()
        else:
            print(f"Datos rellenados \n Nombre: {nomb}\n Edad: {edad} años\nEstatura: {estatura} metros \n Estudias: {'Si' if est else 'No'}")
            pausa()
        limpiar()        
    elif opcion == 6:
        opcion = None
        nomb = None
        edad = None
        estatura = None
        est = None
    elif opcion == 7:
        if nomb is None or edad is None or estatura is None or est is None:
            print("Ingrese los datos completos para sobreescribir")
            pausa()
        else:
            with open("datos.txt","w",encoding="utf-8") as archivo:
                archivo.write(f"Nombre:{nomb} \n")
                archivo.write(f"Edad:{edad} \n")
                archivo.write(f"Estatura:{estatura} \n")
                archivo.write(f"Estudia: {'Si'if est else 'No'}\n")
            datos_guardados = True
            archivo.close()
            print("Datos guardados")
            pausa()

    elif opcion == 8:
        if nomb is None or edad is None or estatura is None or est is None:
            print("Ingrese los datos completos")
            pausa()
        else:
            with open("datos.txt","r",encoding="utf-8") as archivo:
                print(archivo.read())
            opcion = None
            nomb = None
            edad = None
            estatura = None
            est = None
            pausa()
        
    elif opcion == 9:
        if datos_guardados:
            ruta_calculadora = os.path.join("C++","Calculadora","build","programa.exe")
            print(ruta_calculadora)
            os.system(ruta_calculadora)
            pausa()
    if opcion == 10:
        break