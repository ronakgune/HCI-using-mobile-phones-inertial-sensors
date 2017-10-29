public class cThread implements Runnable {
    
    DatagramPacket udpPacket;
    
    DatagramSocket sock;
    
    String stringToSend;
    
    @Override
    
    public void run() 
    
    {
    
        try{
        
            sock = new DatagramSocket(2050);
            
            Log.d("server socket", "Created");
            
            InetAddress serverAdd = InetAddress.getByName(Servers.serverIP);
            
             stringToSend = "*|" + String.valueOf(linear\_acceleration[0]) + "|" +
            
            String.valueOf(linear\_acceleration[1]) + "|" +
            
            String.valueOf(linear\_acceleration[2]) + "|" + Remote.buttonPressed();
            
            udpPacket = new DatagramPacket(stringToSend.getBytes(),
            
            stringToSend.length(),serverAdd, 2050);
            
            Log.d("Test\_socket-connection", "Reading...");
            
            sock.send(udpPacket);
            
            test = br.readLine();
            
            System.out.println(test);
            
            Log.d("Test\_socket-connection", "Printing to device...");
            
            sock.close();
            
       } catch (IOException e) {
       
            e.printStackTrace();
        } 
        
        finally 
        {
        
        if (sock != null) 
        
        {
        
        sock.close();
                
            }
        }
    }
