package lab_2_word_count_data_structures;

import java.io.File;
import java.util.AbstractMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Map.Entry;

public class word_count_linked_list_sort 
{
	public static Entry<String, Integer> count_ARRAY(String[] tokens) {
		int CAPACITY = 10000;
		String[] words = new String[CAPACITY];
		int[] counts = new int[CAPACITY];
		for (int j = 0; j < tokens.length; j++) {
			String token = tokens[j];
			for (int i = 0; i < CAPACITY; i++) {
				if (words[i] == null) {
					words[i] = token;
					counts[i] = 1;
					break;
				} else if (words[i].equals(token))
					counts[i] = counts[i] + 1;
			}
		}

		int maxCount = 0;
		String maxWord = "";
		for (int i = 0; i < CAPACITY & words[i] != null; i++) {
			if (counts[i] > maxCount) {
				maxWord = words[i];
				maxCount = counts[i];
			}
		}
		return new AbstractMap.SimpleEntry<String, Integer>(maxWord, maxCount);
	}

	public static Entry<String, Integer> count_LINKED_LIST(String[] tokens) {
		LinkedList<Entry<String, Integer>> list = new LinkedList<Entry<String, Integer>>();
		for (int j = 0; j < tokens.length; j++) {
			String word = tokens[j];
			boolean found = false;
			Iterator<Entry<String, Integer>> itr = list.iterator();
			int i = 0;
			while(itr.hasNext()) {
				
				Entry<String, Integer> e = itr.next();

				if (word.equals(e.getKey())) {
					e.setValue(e.getValue() + 1);
					list.set(i, e);
					found = true;
					break;
				}
				i++;
			}
			if (!found)
				list.add(new AbstractMap.SimpleEntry<String, Integer>(word, 1));
		}

		int maxCount = 0;
		String maxWord = "";
		for (int i = 0; i < list.size(); i++) {
			int count = list.get(i).getValue();
			if (count > maxCount) {
				maxWord = list.get(i).getKey();
				maxCount = count;
			}
		}
		return new AbstractMap.SimpleEntry<String, Integer>(maxWord, maxCount);
	}

	static String[] readText(String PATH) throws Exception {
		Scanner doc = new Scanner(new File(PATH)).useDelimiter("[^a-zA-Z]+");
		int length = 0;
		while (doc.hasNext()) {
			doc.next();
			length++;
		}

		String[] tokens = new String[length];
		Scanner s = new Scanner(new File(PATH)).useDelimiter("[^a-zA-Z]+");
		length = 0;
		while (s.hasNext()) {
			tokens[length] = s.next().toLowerCase();
			length++;
		}
		doc.close();

		return tokens;
	}

	public static void main(String[] args) throws Exception {

		String PATH = "/Users/Talha/Desktop/dblp5k.txt";
		String[] tokens = readText(PATH);
		long startTime = System.currentTimeMillis();
		Entry<String, Integer> entry = count_LINKED_LIST(tokens);
		long endTime = System.currentTimeMillis();
		String time = String.format("%12d", endTime - startTime);
		System.out.println("time\t" + time + "\t" + entry.getKey() + ":" + entry.getValue());

		tokens = readText(PATH);
		startTime = System.currentTimeMillis();
		entry = count_ARRAY(tokens);
		endTime = System.currentTimeMillis();
		time = String.format("%12d", endTime - startTime);
		System.out.println("time\t" + time + "\t" + entry.getKey() + ":" + entry.getValue());
	}

}
