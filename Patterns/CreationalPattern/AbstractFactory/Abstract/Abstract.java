package Patterns.CreationalPattern.AbstractFactory.Abstract;

public class Abstract {
 
    public static void main(String[] args) {
        System.out.println("Abstract started");
        String style="victorian";
        RoomService roomService=new RoomService();
        FurnitureFactory furnitureFactory= FurnitureFactoryProvider.getFactory(style);
        roomService.createRoom(furnitureFactory);
    }
}
