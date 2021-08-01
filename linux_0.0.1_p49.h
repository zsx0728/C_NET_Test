/* 检测显示器的类型。
 * return 0=mono, 1=colour
 */
Cint detect_video_type(void)
{
        int rc;
        char c=(*(USHORT*)0x410&0x30)

        if(c == 0X30)
                rc = 0;
        else
                rc = 1;

        return rc;
}
