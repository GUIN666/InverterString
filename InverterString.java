public class InverterString {

  public static void main(String[] args) {
    String str = "Exemplo"; // Armazena string
    String invertida = "";

    for (int i = str.length() - 1; i >= 0; i--) { // Laço de repetição que inverterá a string
      invertida += str.charAt(i);
    }

    System.out.println(invertida);
  }
}