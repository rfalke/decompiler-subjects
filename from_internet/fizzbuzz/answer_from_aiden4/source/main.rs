use std::io::*;
use itoap::Integer;
const FIZZ:*const u8 = "Fizz\n".as_ptr();
const BUZZ:*const u8 = "Buzz\n".as_ptr();
const FIZZBUZZ:*const u8 = "FizzBuzz\n".as_ptr();
const BUF_SIZE:usize = 1024*256;
const BLOCK_SIZE:usize = 15 * i32::MAX_LEN;
/// buf.len() > count
macro_rules! itoap_write{
  ($buf:ident,$count:ident,$num:ident)=>{
    $count += itoap::write_to_ptr(
      $buf.get_unchecked_mut($count..).as_mut_ptr(),
      $num
    );
    $buf.as_mut_ptr().add($count).write(b'\n');
    $count += 1;
  }
}
///ptr must be valid, buf.len() > count, ptr.add(len) must not overflow buffer
macro_rules! str_write{
  ($buf:ident,$count:ident,$ptr:ident,$len:literal)=>{
    let ptr = $buf.get_unchecked_mut($count..).as_mut_ptr();
    ptr.copy_from_nonoverlapping($ptr,$len);
    $count += $len;
  }
}

fn main() -> Result<()>{
  let mut write = stdout();
  let mut count:usize = 0;
  let mut buf = [0u8;BUF_SIZE];
  let mut i:i32 = -1;
  loop{
    if &count + &BLOCK_SIZE > BUF_SIZE{
      unsafe{
        write.write_all(
          buf.get_unchecked(..count)
        )?;
      }
      count = 0;
    } 
    i += 2;
    unsafe{
      itoap_write!(buf,count,i);     
      i += 1;
      itoap_write!(buf,count,i);
      str_write!(buf,count,FIZZ,5);
      i += 2;
      itoap_write!(buf,count,i);
      str_write!(buf,count,BUZZ,5);
      str_write!(buf,count,FIZZ,5);
      i += 3;
      itoap_write!(buf,count,i);
      i += 1;
      itoap_write!(buf,count,i);
      str_write!(buf,count,FIZZ,5);
      str_write!(buf,count,BUZZ,5);
      i += 3;
      itoap_write!(buf,count,i);
      str_write!(buf,count,FIZZ,5);
      i += 2;
      itoap_write!(buf,count,i);
      i += 1;
      itoap_write!(buf,count,i);
      str_write!(buf,count,FIZZBUZZ,9);
    }
  }
}
