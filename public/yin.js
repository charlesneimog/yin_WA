function AudioStream() {
    var audioContext = new AudioContext();
    var analyser = audioContext.createAnalyser();
    analyser.fftSize = 2048;
    var sampleRate = audioContext.sampleRate;
    var sampleRate = audioContext.sampleRate;
    var data = new Float32Array(analyser.fftSize);
    function step() {
        requestAnimationFrame(step);
        analyser.getFloatTimeDomainData(data);
        ckn_fft(data, sampleRate);
    }

    stream.then(function(stream) {
        var source = audioContext.createMediaStreamSource(stream);
        source.connect(analyser);
        step();

    });
}