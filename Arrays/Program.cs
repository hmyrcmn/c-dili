using System;

namespace Arrays
{
    class Program
    {
        static void Main(string[] args)
        {
            //Array dizi
            int[] numaralar = new int[5] { 1, 2, 3, 4, 5 };
            for (int i = 0; i < numaralar.Length; i++)
            {
                Console.WriteLine(numaralar[i]);
            }
            //string[] liste adı (array name )=new string[array boyutu ] 
            string[] names = new string[5] { "ebru", "sümeyye", "mükerrem", "kübra", "humeyra" };
            foreach (var name in names)
            {
                Console.WriteLine(name);
            }
            string[] namess = new string[3];
            namess[0] = "ayşe";
            namess[1] = "rıdvan";
            namess[2] = "çimen";


            Console.WriteLine("*******************");
            foreach (var x in namess)
            {
                Console.WriteLine(x);
            }


            //  ÇOK BOYUTLU MUTIPUBLY ARRAY DİZİLER
            String[,] namesurname = new string[3, 2]
            {//namesurname[0,0]=""; bu satır bu şekilde çok uzujnolur 
                { "hümeyra","çimen"},
                {"sümeyye","çimen" },
                { "ebru","çimen"},
            };
            // bu iki boyutlu dizi elemanlarını yazdırmak için içe içe iki for döngüsü kullanmalıyım
            for (int i = 0; i < namesurname.GetUpperBound(0); i++)
            {
                for (int j = 0; j < namesurname.GetUpperBound(1); j++)// uzunulugu tek dizi gibi vermemyiz not=namesurname.lenght
                {
                    Console.WriteLine(namesurname[i,j]);
                }
                Console.WriteLine("**********");

                string mark ="bmw";
                string mark1="porşe";
                string mark3 = "ferrari";
                Console.WriteLine(mark);
                Console.WriteLine(mark[0]);// b harfi verir
                foreach (var harf in mark3)
                {
                    
                    Console.WriteLine(harf);
                }
                Console.WriteLine("****************");
                Console.WriteLine(string.Format("{0} {1} {2} ", mark, mark1, mark3));

                Console.WriteLine("######################methods examples#####################");
                // ready stirngs mehtods uses and examples with methods:
                string meeting = " I'm a camputer engineering .";
                // var result1 = meeting.Length; // meetin uzunlugunu verir
                var result2 = meeting.Clone();// () gerekli 
                Console.WriteLine(result2);
                meeting = "my sister will lawyer";
                
                Console.WriteLine(meeting);
                var result3 = meeting.EndsWith("."); // bool türünde veri üretir bunla mı bitiyor sorusunu cevabını verir t/f
                var result4 = meeting.StartsWith("m");

                var result5 = meeting.Substring(10); // verdiğin index num dan itibaren yazmaya başlar
                var result6 = meeting.IndexOf("w");// griilen karakterin index no veriri
                var result8 = meeting.LastIndexOf("ı"); // sondan başlar taramaya aynı karakterden birkaç tane varsa sonda olanın indexini verir

                var result7 = meeting.Insert(0,"layd is a centelmen ");// başlayacagı index no danitibaren yazılacak string girilir

                Console.WriteLine(result8);


            }



    }
    }
}
