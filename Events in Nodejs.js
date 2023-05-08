const EventEmitter = require('events');
const emitter = new EventEmitter();

//Register a listener
emitter.on('messageLogged', () => {
    console.log('Listener called');
});

emitter.emit('messageLogged');
