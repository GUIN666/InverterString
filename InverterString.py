def inverter_string(str):
    invertida = ''
    for i in range(len(str) - 1, -1, -1): # Laço de repetição que inverterá a string
        invertida += str[i]
    return invertida

str = "Exemplo" # Armazenar string
invertida = inverter_string(str)
print(invertida)
