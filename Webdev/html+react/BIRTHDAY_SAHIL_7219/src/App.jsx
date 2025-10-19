import { useState } from 'react'
import './App.css'
import First from './componets/First.jsx'
import Second from './componets/Second.jsx'
import Button from './componets/Button.jsx'
function App() {
    let [frame,setFrame]=useState('First');
    let [m,setM]=useState('');
    let compo={
      First: <First/>,
      Second:<Second m/>
    } 
  
  return (
    <>
      <div className='flex flex-col gap-6'>
        <div className='mb-10'>
        {compo[frame]}
        </div>
        <div className=''>
          <Button fun={setFrame}label={frame=='Second' ? 'SEND MSG' : 'CLICK' }></Button>
        </div>
      
      </div>
    </>
  )
}

export default App
