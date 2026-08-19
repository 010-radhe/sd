public class Normal {

    public static void main(String[] args) {
        System.out.println("application started");
        String style="modern";
       
        RoomService roomService = new RoomService(style);
        roomService.createRoom();
    }
}
