import java.time.DayOfWeek;
import java.time.LocalDate;

public class EulerQ19 {
    static int getSundays(LocalDate start, LocalDate end)
    {
        int sunday = 0;
        while(start.compareTo(end) <= 0){
            if(start.getDayOfWeek().compareTo(DayOfWeek.SUNDAY) == 0)
                sunday++;
            start = start.plusMonths(1);
        }
        return sunday;
    }
    public static void main(String[] args) {
        LocalDate start = LocalDate.of(1901, 1, 1);
        LocalDate end = LocalDate.of(2000, 12, 31);
        System.out.println(getSundays(start, end));

    }
}
