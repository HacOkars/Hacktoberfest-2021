import java.util.HashSet;
import java.util.Set;

public class RepeatedWordCountInString {
	/*
	*	To find the word count in a String
	*/
	public static void main(String[] args) {
			System.out.println("\nRepeated Word Count: "+getRepeatedWordCountInString("India is a country in South Asia. " +
					"It is the seventh largest country by area and second-most populous country. " +
					"It is most populous democracy in the world."));
	}

	public static int getRepeatedWordCountInString(String str) {
		String[] words = str.replace(".","").toLowerCase().split(" ");
		System.out.println("Number of words: "+words.length);
		Set<String> uniqueWordSet = new HashSet<String>();
		Set<String> repeatedWordSet = new HashSet<String>();
		int count = 0;
		for (String word: words){
			if(!uniqueWordSet.add(word)){
				repeatedWordSet.add(word);
				count++;
			}
		}
		Object[] arr = repeatedWordSet.toArray();
		System.out.println("Unique words: "+uniqueWordSet);
		System.out.print("Repeated words: ");
		for(Object str1: arr) {
			System.out.print(str1 + " ");
		}
		return count;
	}
}