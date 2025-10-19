import React from 'react'
import Typing  from './Typing'

function First() {
    return (
        <>
            <div className='bg-yellow-300 w-90 h-50 rounded-2xl border-l-4 border-l-orange-500
                flex items-center border-r-4 border-r-orange-500
                justify-center text-white'>
                <div className="flex h-20 w-40 text-center">
                    <Typing size="2xl" msg="HELLO BRO SORRY FOR LATE" font1="cursive" />
                </div>
            </div>
        </>
    )
}

export default First
