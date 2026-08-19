package Patterns.CreationalPattern.AbstractFactory.Abstract;

public class RoomService {
    String style;
    private Chair chair;
    private Table table;


    public RoomService() {
    }
    public void createRoom(FurnitureFactory furnitureFactory) {
        chair = furnitureFactory.createChair();
        table = furnitureFactory.createTable();
        chair.sit();
        table.use();
    }
    

}
