class Test{
    public static void main(String... arg){
        System.out.println(Thread.currentThread().getName() + " Started ");

        Thread t1 = new Thread(){
            @Override
            public void run(){
                for(int i=0; i<=30; i++)
                    System.out.println(Thread.currentThread().getName() +"  " + i);
            }
        };

        Thread t2 = new Thread(){
            @Override
            public void run(){
                for(int i=0; i<=30; i++)
                    System.out.println(Thread.currentThread().getName() + "  " + i);
            }
        };

        t1.setName("Thread-1");
        t2.setName("Thread-2");
        t1.start();
        t2.start();

        System.out.println("Main method completed");
    }
}