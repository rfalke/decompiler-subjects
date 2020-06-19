
// This is not the complete source but the changed part

import SwiftUI

func fib(_ n: Int) -> Int {
    guard n > 1 else { return n }
    return fib(n-1) + fib(n-2)
}

struct ContentView: View {
    let n=Int(NSDate().timeIntervalSince1970)%4+6
    var body: some View {
        Text("Hello, World! fib("+String(n)+")="+String(fib(n)))
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
