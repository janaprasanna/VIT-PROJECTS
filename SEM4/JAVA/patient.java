import java.util.*;
public class patient{
      int patientid;
      String patientname;
      int wardno;
      String doctorname;
      public patient(int pid, String pname, int wno, String dname){
            patientid = pid;
            wardno = wno;
            doctorname = dname;
            patientname =  pname;
      }
      public patient(patient p){
            System.out.println("copy constructor");
            System.out.println("patientid="+p.patientid);
      }

     public static void main(String args[]){
           Scanner s = new Scanner(System.in);
      patient p1 = new patient(100, "jana", 47, "xyz");
       patient p2 = new patient(p1);
     }
}