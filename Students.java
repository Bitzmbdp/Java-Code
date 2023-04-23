
import java.util.Arrays;

public class Students {
    public String name;
    public int age;
    public double score;

    public Students(String name, int age, double score) {
        this.name = name;
        this.age = age;
        this.score = score;
    }

    @Override
    public String toString() {
        return "Students{" +
                "name='" + name + '\'' +
                ", age=" + age +
                ", score=" + score +
                '}';
    }

    public static int myCompareTo(Students thos, Students o) {
        return thos.age - o.age;
        //return o.name.compareTo(thos.name);//����������,���������ѭ����������
    }
    public static void bubbleSort(Students[] students) {
        for (int i = 0; i < students.length - 1; i++) {
            for (int j = i; j < (students.length - 1 - i); j++) {
                if (myCompareTo(students[j], students[j + 1]) > 0) {
                    Students tmp = students[j + 1];
                    students[j + 1] = students[j];
                    students[j] = tmp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Students arr[] = new Students[3];
        arr[0] = new Students("����", 19, 37.1);
        arr[1] = new Students("����", 9, 99.1);
        arr[2] = new Students("����", 59, 77.1);
        System.out.println("����ǰ��" + Arrays.toString(arr));
        //Arrays.sort(arr);
        bubbleSort(arr);
        System.out.println("�����" + Arrays.toString(arr));
    }
}