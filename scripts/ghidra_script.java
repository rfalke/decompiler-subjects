import java.util.List;
import java.util.ArrayList;
import java.io.File;

import ghidra.app.script.GhidraScript;
import ghidra.app.util.Option;
import ghidra.app.util.exporter.CppExporter;

public class ghidra_script extends GhidraScript {

    @Override
    public void run() throws Exception {
        String execPath = currentProgram.getExecutablePath();
        String execDir = execPath.substring(0, execPath.lastIndexOf(File.separator) + 1);
        File outputFile = new File(execDir + "/ghidra.c");

        CppExporter cppExporter = new CppExporter();
        List<Option> options = new ArrayList<Option>();
        options.add(new Option(CppExporter.CREATE_HEADER_FILE, new Boolean(false)));
        cppExporter.setOptions(options);
        cppExporter.setExporterServiceProvider(state.getTool());
        cppExporter.export(outputFile, currentProgram, null, monitor);
        println("Wrote " + outputFile);
    }

}
