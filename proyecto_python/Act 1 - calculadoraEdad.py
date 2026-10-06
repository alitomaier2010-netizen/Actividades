# Materia: Laboratorio de Programacion (LPR)
# E.E.S.T. N° 1 "Eduardo Ader" - Vicente Lopez
# Archivo: proyecto_python/Act 1 - calculadoraEdad.py
# Actividad 1: De Revision Integral (Python & C++)

def es_bisiesto(anio):
    return (anio % 4 == 0 and anio % 100 != 0) or (anio % 400 == 0)

def es_fecha_valida(d, m, a):
    if a < 1900 or a > 2026: return False
    if m < 1 or m > 12: return False
    if d < 1 or d > 31: return False
    if m in [4, 6, 9, 11] and d > 30: return False
    if m == 2:
        if es_bisiesto(a):
            if d > 29: return False
        else:
            if d > 28: return False
    return True

# Codigo principal
# REGLA OBLIGATORIA: Cambien el nombre de la salida por el suyo real
print("=====================================================")
print("  CALCULADORA EN PYTHON - INTEGRANTES:")
print("    1) Alexis Maier")
print("    2) Aramis Demaria")
print("    3) Leon Melgarejo")
print("=====================================================")
try:
    diaN = int(input("Ingrese Dia de nacimiento: "))
    mesN = int(input("Ingrese Mes de nacimiento: "))
    anioN = int(input("Ingrese Anio de nacimiento: "))
    diaA, mesA, anioA = 8, 7, 2026

    if not es_fecha_valida(diaN, mesN, anioN):
        print("[ERROR] La fecha ingresada no es valida.")
    else:
        edad = anioA - anioN

        # COMPLETADO: Si el mes de nacimiento es posterior al mes actual, o si
        # estamos en el mismo mes pero todavia no llego el dia de cumpleanos,
        # la persona aun no cumplio anos este anio, por eso se le resta 1.
        if mesN > mesA or (mesN == mesA and diaN > diaA):
            edad = edad - 1

        print(f"\n[SISTEMA] Fecha de hoy: {diaA}/{mesA}/{anioA}")
        print(f"[SISTEMA] Edad calculada: {edad} anos.")
except ValueError:
    print("[ERROR] Deben ingresar numeros enteros.")